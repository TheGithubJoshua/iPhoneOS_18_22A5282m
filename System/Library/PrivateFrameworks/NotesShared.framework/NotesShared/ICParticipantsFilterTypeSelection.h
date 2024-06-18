@class NSSet, NSArray, NSString, NSManagedObjectContext;

@interface ICParticipantsFilterTypeSelection : ICFilterTypeSelection

@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (nonatomic) unsigned long long selectionType;
@property (nonatomic) unsigned long long joinOperator;
@property (retain, nonatomic) NSSet *participantUserIDs;
@property (readonly, nonatomic) NSArray *unresolvedParticipants;
@property (readonly, nonatomic) NSArray *participants;
@property (readonly, nonatomic) NSString *summary;
@property (readonly, nonatomic) NSString *summaryWithJoinOperatorMenu;

+ (id)keyPathsForValuesAffectingIsEmpty;

- (unsigned long long)hash;
- (BOOL)isValid;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addParticipantUserID:(id)a0;
- (id)initWithManagedObjectContext:(id)a0 accountObjectID:(id)a1;
- (id)initWithManagedObjectContext:(id)a0 accountObjectID:(id)a1 selectionType:(unsigned long long)a2;
- (id)initWithManagedObjectContext:(id)a0 accountObjectID:(id)a1 selectionType:(unsigned long long)a2 joinOperator:(unsigned long long)a3;
- (BOOL)isEqualToICParticipantsFilterTypeSelection:(id)a0;
- (id)rawFilterValue;
- (void)removeParticipantUserID:(id)a0;

@end
