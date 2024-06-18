@class NRPBMutableDeviceProperty;
@protocol NSObject, NSCopying;

@interface NRMutableDeviceProperty : NRMutableStateBase

@property (readonly, retain, nonatomic) id<NSObject, NSCopying> value;
@property (retain, nonatomic) NRPBMutableDeviceProperty *protobuf;

+ (BOOL)supportsSecureCoding;
+ (id)diffFrom:(id)a0 to:(id)a1;
+ (id)enclosedClassTypes;

- (id)applyDiff:(id)a0 upOnly:(BOOL)a1 notifyParent:(BOOL)a2 unconditional:(BOOL)a3;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithValue:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (void)setValue:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
