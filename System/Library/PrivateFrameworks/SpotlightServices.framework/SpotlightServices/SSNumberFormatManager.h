@class NSByteCountFormatter, NSNumberFormatter;

@interface SSNumberFormatManager : NSObject

@property (retain) NSNumberFormatter *numberFormatter;
@property (retain) NSByteCountFormatter *byteCountFormatter;

+ (id)stringFromByteCount:(long long)a0;
+ (void)initialize;
+ (id)stringFromInt:(int)a0 withMinimumDigits:(unsigned long long)a1;

- (id)init;
- (void).cxx_destruct;

@end
