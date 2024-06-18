@class DHKey, NGMPublicPreKey;

@interface NGMFullPrekey : NSObject

@property (readonly, nonatomic) DHKey *dhKey;
@property (readonly, nonatomic) NGMPublicPreKey *publicPrekey;

- (BOOL)delete;
- (id)initWithPrekeySignedBy:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)description;
- (id)pbDevicePrekey;
- (id)initWithPBPrekey:(id)a0 error:(id *)a1;

@end
