@interface HDListUserDomainConceptEntity : HDUserDomainConceptEntity

+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)foreignKeys;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (BOOL)updateConcreteUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)willDeleteConcreteUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 syncProvenance:(long long)a2 transaction:(id)a3 error:(id *)a4;
+ (Class)userDomainConceptSemanticIdentifierClass;
+ (Class)userDomainConceptClass;
+ (long long)protectionClass;
+ (id)predicateMatchingSemanticDuplicatesOf:(id)a0;
+ (id)newUserDomainConceptForRefreshWithCodingCollection:(id)a0 propertyCollection:(id)a1;
+ (id)privateDataEntities;
+ (id)predicateMatchingSemanticIdentifier:(id)a0;
+ (id)deduplicateUserDomainConcept:(id)a0 with:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)insertConcreteUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;

@end
