@class NSString, NSData, NSDate;

@interface CWFLinkQualityMetric : NSObject <CWFJSONEncodable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDate *updatedAt;
@property (readonly, nonatomic) long long RSSI;
@property (readonly, nonatomic) long long noise;
@property (readonly, nonatomic) double txRate;
@property (readonly, nonatomic) double rxRate;
@property (readonly, nonatomic) unsigned long long CCA;
@property (copy, nonatomic) NSData *linkQualityMetricData;

- (id)initWithCoder:(id)a0;
- (long long)RSSI;
- (double)rxRate;
- (long long)noise;
- (unsigned long long)CCA;
- (id)JSONCompatibleKeyValueMap;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)txRate;
- (BOOL)isEqualToLinkQualityMetric:(id)a0;

@end
