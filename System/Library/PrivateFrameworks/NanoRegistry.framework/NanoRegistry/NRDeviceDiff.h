@class NRPBDeviceDiff, NSDictionary;

@interface NRDeviceDiff : NRDiffBase <NSFastEnumeration> {
    NSDictionary *_diffPropertyDiffs;
}

@property (readonly, nonatomic) NRPBDeviceDiff *protobuf;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)allPropertyNames;
- (id)initWithDiffPropertyDiffs:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (id)diffPropertyDiffForName:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)objectForKeyedSubscript:(id)a0;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;

@end
