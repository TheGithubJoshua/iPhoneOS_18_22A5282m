@class NSString, NSArray, NSDate;

@interface CHAppLaunchSensorData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSArray *embeddingVector;
@property (readonly, nonatomic) NSString *modelVersion;
@property (readonly, nonatomic) NSString *algorithmType;
@property (readonly, nonatomic) NSDate *trainingDate;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithBundleId:(id)a0 embeddingVector:(id)a1 modelVersion:(id)a2 algorithmType:(id)a3 trainingDate:(id)a4;

@end
