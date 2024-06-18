@class NSString;

@interface _UTDynamicTypeRecord : UTTypeRecord {
    NSString *_identifier;
}

+ (BOOL)supportsSecureCoding;
+ (id)_propertyClasses;

- (id)initWithCoder:(id)a0;
- (BOOL)isDynamic;
- (id)pedigreeWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7[8]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; } *)a3;
- (id)_initWithContext:(struct LSContext { id x0; } *)a0 dynamicUTI:(id)a1;
- (id)declaration;
- (BOOL)isCoreType;
- (void)_enumerateRelatedTypeUnitsOrDynamicIdsWithContext:(struct LSContext { id x0; } *)a0 unitID:(unsigned int)a1 maximumDegreeOfSeparation:(long long)a2 block:(id /* block */)a3;
- (BOOL)isInPublicDomain;
- (BOOL)isImported;
- (id)referenceURL;
- (id)childTypeIdentifiers;
- (id)_declaringBundleBookmark;
- (BOOL)isExported;
- (id)tagSpecification;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isChildOfTypeIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)declaringBundleRecord;
- (id)preferredTagOfClass:(id)a0;
- (id)_delegatePath;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)conformsToTypeIdentifier:(id)a0;
- (id)_persistentIdentifierWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const void *)a3;
- (id)_localizedDescription;
- (id)pedigree;
- (id)identifier;
- (id)version;
- (void)_LSRecord_resolve_pedigree;
- (BOOL)isDeclared;
- (id)parentTypeIdentifiers;
- (BOOL)isActive;
- (BOOL)isWildcard;

@end
