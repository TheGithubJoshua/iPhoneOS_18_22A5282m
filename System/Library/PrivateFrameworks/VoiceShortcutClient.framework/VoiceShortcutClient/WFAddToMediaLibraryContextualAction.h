@class WFContextualActionMediaItemDescriptor;

@interface WFAddToMediaLibraryContextualAction : WFContextualAction

@property (readonly, nonatomic) WFContextualActionMediaItemDescriptor *mediaItemDescriptor;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)uniqueIdentifier;
- (id)initWithMediaItemDescriptor:(id)a0;

@end
