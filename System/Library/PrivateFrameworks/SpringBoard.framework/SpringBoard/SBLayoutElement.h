@class NSString;

@interface SBLayoutElement : NSObject <SBLayoutElementDescriptor, SBWorkspaceEntityGenerating, BSDescriptionProviding, NSCopying> {
    NSString *_uniqueIdentifier;
    long long _layoutRole;
    unsigned long long _supportedLayoutRoles;
    unsigned long long _layoutAttributes;
    Class _viewControllerClass;
}

@property (copy, nonatomic) id /* block */ entityGenerator;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) long long layoutRole;
@property (readonly, nonatomic) unsigned long long supportedLayoutRoles;
@property (readonly, nonatomic) unsigned long long layoutAttributes;
@property (readonly, nonatomic) Class viewControllerClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)elementWithDescriptor:(id)a0 layoutRole:(long long)a1;
+ (id)elementWithDescriptor:(id)a0;

- (BOOL)hasLayoutAttributes:(unsigned long long)a0;
- (BOOL)representsSameLayoutElementAsDescriptor:(id)a0;
- (BOOL)supportsLayoutRole:(long long)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithIdentifier:(id)a0 layoutRole:(long long)a1 supportedLayoutRoles:(unsigned long long)a2 layoutAttributes:(unsigned long long)a3 viewControllerClass:(Class)a4 entityGenerator:(id /* block */)a5;
- (id)succinctDescription;
- (id)workspaceEntity;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;

@end
