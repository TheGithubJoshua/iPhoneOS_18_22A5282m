@class NSArray, NSString, NSSet;

@interface RBSProcessStateDescriptor : NSObject <RBSXPCSecureCoding, NSCopying> {
    NSSet *_endowmentNamespaces;
}

@property (nonatomic) unsigned long long values;
@property (copy, nonatomic) NSArray *endowmentNamespaces;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRBSXPCSecureCoding;
+ (id)descriptor;

- (void)filterState:(id)a0;
- (id)init;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
