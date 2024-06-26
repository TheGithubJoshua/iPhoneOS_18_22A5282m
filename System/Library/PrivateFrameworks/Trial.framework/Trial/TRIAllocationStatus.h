@class NSDate;

@interface TRIAllocationStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned char type;
@property (readonly, nonatomic) NSDate *date;

+ (id)defaultProvider;
+ (id)sampleAllocationStatuses:(id)a0 correlationId:(id)a1 nrSamples:(unsigned int)a2;
+ (const char *)notificationNameForDeploymentEnvironment:(int)a0;
+ (id)syncProxyWithErrorHandler:(id /* block */)a0;
+ (id)activeExperimentInformationWithError:(id *)a0;
+ (id)_defaultProvider;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToStatus:(id)a0;
- (unsigned long long)hash;
- (id)initWithType:(unsigned char)a0 date:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
