@class NSData, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface TICryptographer : NSObject <TICryptographing> {
    NSData *_deviceSalt;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) NSData *deviceSalt;
@property (copy, nonatomic) NSString *cachedRecipientName;
@property (copy, nonatomic) NSString *cachedRecipientDigest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setSharedCryptographer:(id)a0;
+ (id)singletonInstance;
+ (id)sharedCryptographer;

- (id)init;
- (id)stringDigestForName:(id)a0;
- (void).cxx_destruct;

@end
