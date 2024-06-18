@class TRILevel;

@interface TRILevelChecked : NSObject {
    TRILevel *_wrapped;
}

+ (id)wrapLevel:(id)a0;

- (int)intValue;
- (long long)longValue;
- (double)doubleValue;
- (id)binaryValue;
- (id)init;
- (id)initWithLevel:(id)a0;
- (float)floatValue;
- (id)stringValue;
- (void).cxx_destruct;
- (id)description;
- (id)directoryValue;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)booleanValue;
- (id)fileValue;

@end
