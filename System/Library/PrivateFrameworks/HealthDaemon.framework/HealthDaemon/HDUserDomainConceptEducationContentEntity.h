@class NSString;

@interface HDUserDomainConceptEducationContentEntity : HDHealthEntity <HDUserDomainConceptDataEntity>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)foreignKeys;
+ (BOOL)retrieveDataForUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 mutableUserDomainConceptProperties:(id)a2 transaction:(id)a3 error:(id *)a4;
+ (BOOL)willDeleteUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 syncProvenance:(long long)a2 transaction:(id)a3 error:(id *)a4;
+ (long long)protectionClass;
+ (BOOL)addPropertyDataToCodable:(id)a0 userDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)insertDataForUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (id)privateSubEntities;


@end
