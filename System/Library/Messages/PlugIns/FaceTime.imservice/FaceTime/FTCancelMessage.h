@class NSArray, NSNumber;

@interface FTCancelMessage : FTFaceTimeMessage <NSCopying>

@property (copy) NSArray *peers;
@property (copy) NSNumber *reason;

- (id)bagKey;
- (id)messageBody;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)requiredKeys;

@end
