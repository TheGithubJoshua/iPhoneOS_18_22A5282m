@interface CAMediaTimingFunctionBuiltin : CAMediaTimingFunction {
    unsigned int _index;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCAMLWriter:(id)a0;
- (Class)classForCoder;
- (id)description;
- (void)_getPoints:(double *)a0;

@end
