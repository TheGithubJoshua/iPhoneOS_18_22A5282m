@interface HDUserDomainConceptEntity : HDHealthEntity

+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (BOOL)updateConcreteUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (id)refreshOntologyContentForUserDomainConcept:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)defaultForeignKey;
+ (id)userDomainConceptUUIDForCanonicalConceptWithSemanticIdentifierString:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)deleteUserDomainConcept:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)willDeleteConcreteUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 syncProvenance:(long long)a2 transaction:(id)a3 error:(id *)a4;
+ (Class)userDomainConceptSemanticIdentifierClass;
+ (long long)evaluateIsCanonicalConcept:(id)a0 entityClass:(Class)a1 transaction:(id)a2 error:(id *)a3;
+ (Class)userDomainConceptClass;
+ (BOOL)incrementSyncAnchorAndAdjustSyncProvenanceIfNotLocalForUserDomainConceptWithUUID:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)joinClausesForProperty:(id)a0;
+ (id)ignoreHiddenConceptsPredicate;
+ (long long)protectionClass;
+ (id)propertyForSyncProvenance;
+ (BOOL)supportsSyncStore:(id)a0;
+ (long long)storeUserDomainConcept:(id)a0 method:(long long)a1 syncProvenance:(long long)a2 syncIdentity:(long long)a3 syncVersion:(struct { int x0; int x1; })a4 transaction:(id)a5 error:(id *)a6;
+ (id)predicateMatchingSemanticDuplicatesOf:(id)a0;
+ (BOOL)insertPrivateDataEnitiesForUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)updateLinksTargetingUserDomainConceptUUID:(id)a0 toTargetUserDomainConceptUUID:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)enumerateUserDomainConceptsWithPredicate:(id)a0 transaction:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (id)newUserDomainConceptForRefreshWithCodingCollection:(id)a0 propertyCollection:(id)a1;
+ (id)createAndRefreshOntologyBackedUserDomainConceptWithConceptIdentifier:(id)a0 additionalProperties:(id)a1 userDomainConceptTypeIdentifier:(id)a2 profile:(id)a3 error:(id *)a4;
+ (long long)storeUserDomainConcept:(id)a0 method:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)encodesCodableUserDomainConceptSubclassData;
+ (BOOL)updatePrivateDataEnitiesForUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 syncProvenance:(long long)a2 transaction:(id)a3 error:(id *)a4;
+ (BOOL)retrievePrivateDataEntitiesForUserDomainConcept:(id)a0 persistentID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (id)privateDataEntities;
+ (id)predicateMatchingSemanticIdentifier:(id)a0;
+ (BOOL)enumerateUserDomainConceptsWithPredicate:(id)a0 limit:(long long)a1 orderingTerms:(id)a2 transaction:(id)a3 error:(id *)a4 enumerationHandler:(id /* block */)a5;
+ (id)deduplicateUserDomainConcept:(id)a0 with:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (id)disambiguatedSQLForProperty:(id)a0;
+ (BOOL)insertConcreteUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (id)propertyForSyncAnchor;
+ (id)privateSubEntities;
+ (BOOL)supportsHidingSemanticDuplicates;

@end
