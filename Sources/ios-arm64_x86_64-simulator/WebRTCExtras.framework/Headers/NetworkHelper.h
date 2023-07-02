//
//  NetworkHelper.h
//  WebRTCExtras
//
//  Created by Aravindh on 05/06/23.
//

#import <Foundation/Foundation.h>
#import <Network/Network.h>

typedef NS_ENUM(NSInteger, NetworkStatusType) {
    NetworkStatusUnknown,
    NetworkStatusConnected,
    NetworkStatusDisconnected
};

typedef struct {
    BOOL isWiFi;
    BOOL isCellular;
    BOOL isEthernet;
    NetworkStatusType status;
    BOOL isExpensive;
    BOOL hasIPv4;
    BOOL hasIPv6;
    BOOL hasNewDNS;
} NetworkStatus;

typedef void (^NetworkStatusChangeCallback)(NetworkStatus);

@interface NetworkHelper : NSObject

+ (void)observeNetworkReachability:(NetworkStatusChangeCallback)callback;
+ (void)stopMonitoring;

@end
