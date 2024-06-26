@class NSDictionary;

@interface HFMultiSizeImageIconDescriptor : HFImageIconDescriptor

@property (retain, nonatomic) NSDictionary *imageIdentifiersKeyedBySize;

- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)imageIdentifierForSize:(id)a0;
- (id)initWithImageIdentifiersKeyedBySize:(id)a0;
- (id)initWithImageIdentifiersKeyedBySize:(id)a0 defaultImageIdentifier:(id)a1;

@end
