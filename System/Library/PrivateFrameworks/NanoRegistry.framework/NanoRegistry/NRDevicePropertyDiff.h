@class NRPBDevicePropertyDiff;
@protocol NSObject, NSCopying;

@interface NRDevicePropertyDiff : NRDiffBase

@property (readonly, nonatomic) id<NSObject, NSCopying> value;
@property (readonly, nonatomic) NRPBDevicePropertyDiff *protobuf;

+ (BOOL)supportsSecureCoding;
+ (id)enclosedClassTypes;
+ (id)packPropertyValue:(id)a0;
+ (id)unpackPropertyValue:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)initWithValue:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
