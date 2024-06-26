@class NSArray, NSString;

@interface VNTextObservation : VNRectangleObservation {
    NSArray *_characterBoxes;
    NSString *_text;
}

@property (copy, nonatomic) NSArray *characterBoxes;
@property (readonly, copy, nonatomic) NSString *text;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)setText:(id)a0;
- (id)vn_cloneObject;

@end
