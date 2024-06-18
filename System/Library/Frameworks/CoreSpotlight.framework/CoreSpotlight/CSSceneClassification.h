@class NSString, NSArray;

@interface CSSceneClassification : NSObject <CSCoderEncoder, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *label;
@property (copy) NSArray *synonyms;
@property double confidence;
@property unsigned int sceneIdentifier;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCSCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLabel:(id)a0 synonyms:(id)a1 confidence:(double)a2 sceneIdentifier:(unsigned int)a3;

@end
