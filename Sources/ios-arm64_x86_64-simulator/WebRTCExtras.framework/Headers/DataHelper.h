// DataHelper.h

#import <Foundation/Foundation.h>

@interface DataHelper : NSObject

+ (int32_t)getInt32FromData:(NSData *)data atIndex:(NSUInteger)startIndex;
+ (int16_t)getInt16FromData:(NSData *)data atIndex:(NSUInteger)startIndex;
+ (int8_t)getInt8FromData:(NSData *)data atIndex:(NSUInteger)startIndex;
+ (NSString *)getStringFromData:(NSData *)data atIndex:(NSUInteger)startIndex length:(NSUInteger)length;
+ (id)getValueFromData:(NSData *)data atIndex:(NSUInteger)startIndex size:(NSUInteger)size;

+ (void)appendValue:(id)value toMutableData:(NSMutableData *)mutableData;
+ (void)appendStringValue:(NSString *)value toMutableData:(NSMutableData *)mutableData;
+ (NSUInteger)uintegerFromInt:(int)value;
+ (id)jsonStringParseWithString:(NSString *)string;

@end
