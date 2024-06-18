@class NSSet, NSUUID;

@interface ATXSlotSet : NSObject <NSCopying, NSSecureCoding> {
    unsigned int _hash;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSSet *parameters;
@property (retain, nonatomic) NSUUID *uuid;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithParameters:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOpaqueParametersUuid:(id)a0;
- (id)initWithParameters:(id)a0 uuid:(id)a1;
- (BOOL)isEqualToSlotSet:(id)a0;
- (id)initWithOpaqueParameters;

@end
