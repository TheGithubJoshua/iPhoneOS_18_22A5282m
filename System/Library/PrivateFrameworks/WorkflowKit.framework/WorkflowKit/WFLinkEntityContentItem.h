@class LNDisplayRepresentation, NSString, LNEntity, LNQueryMetadata, LNEntityMetadata;

@interface WFLinkEntityContentItem : WFContentItem

@property (class, readonly, nonatomic) LNEntityMetadata *entityMetadata;
@property (class, readonly, nonatomic) LNQueryMetadata *queryMetadata;
@property (class, readonly, nonatomic) NSString *appBundleIdentifier;

@property (readonly, nonatomic) LNEntity *entity;
@property (retain, nonatomic) LNDisplayRepresentation *displayRepresentation;

+ (BOOL)supportsSecureCoding;
+ (id)allProperties;
+ (id)typeDescription;
+ (void)initialize;
+ (BOOL)isNotes;
+ (id)allowedOperatorsWithQueryParameterMetadata:(id)a0 objectClass:(Class)a1 operators:(id)a2;
+ (BOOL)hasInMemoryFindAction;
+ (BOOL)hasLibrary;
+ (BOOL)isNoteEntity;
+ (BOOL)isNoteFolderEntityIdentifier:(id)a0;
+ (id)localizedCountDescriptionWithValue:(long long)a0;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;

- (id)initWithCoder:(id)a0;
- (Class)classForKeyedArchiver;
- (Class)classForCoder;
- (id)name;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (Class)classForCopying;
- (void)copyStateToItem:(id)a0;
- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (BOOL)getListThumbnail:(id /* block */)a0 forSize:(struct CGSize { double x0; double x1; })a1;

@end
