@class TPSCloudDeviceInfo;
@protocol TPSCloudDeviceDataSource;

@interface TPSCloudDeviceValidation : TPSTargetingValidation

@property (retain, nonatomic) TPSCloudDeviceInfo *deviceInfo;
@property (weak, nonatomic) id<TPSCloudDeviceDataSource> dataSource;

- (void).cxx_destruct;
- (id)description;
- (void)validateWithCompletion:(id /* block */)a0;
- (id)initWithDeviceInfo:(id)a0;

@end
