@class NSString, VNTensorShape;

@interface VNTensorDescriptor : VNProcessingDescriptor {
    unsigned long long _calculatedStorageByteCount;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long dataType;
@property (readonly, nonatomic) VNTensorShape *shape;
@property (readonly, nonatomic) unsigned long long storageByteCount;

+ (BOOL)supportsSecureCoding;
+ (id)descriptorForEspressoBlobDimensions:(const struct { char *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } *)a0 dataType:(unsigned long long)a1;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithName:(id)a0 dataType:(unsigned long long)a1 shape:(id)a2;

@end
