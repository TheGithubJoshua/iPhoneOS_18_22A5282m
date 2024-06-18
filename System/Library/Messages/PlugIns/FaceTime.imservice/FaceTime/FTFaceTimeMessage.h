@class NSData;

@interface FTFaceTimeMessage : FTIDSMessage <NSCopying>

@property (copy) NSData *sessionToken;

- (id)messageBody;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)requiredKeys;
- (BOOL)hasRequiredKeys:(id *)a0;
- (BOOL)isValidMessage;

@end
