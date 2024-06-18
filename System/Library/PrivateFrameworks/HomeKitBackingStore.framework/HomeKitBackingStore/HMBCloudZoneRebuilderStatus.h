@class NSString;

@interface HMBCloudZoneRebuilderStatus : HMFObject <HMBModelObjectCoder, NSCopying>

@property (readonly, nonatomic) NSString *message;
@property (readonly, nonatomic) unsigned long long rebuildState;
@property (readonly, nonatomic) long long keyStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rebuilderStateString:(unsigned long long)a0;
+ (id)keyStatusString:(long long)a0;
+ (id)hmbDecodeData:(id)a0 fromStorageLocation:(unsigned long long)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributeDescriptions;
- (id)hmbEncodeForStorageLocation:(unsigned long long)a0 error:(id *)a1;
- (id)initWithState:(unsigned long long)a0 message:(id)a1;

@end
