@class ASCodableDatabaseCompetitionListEntry;

@interface ASDatabaseCompetitionListEntryJournalEntry : HDJournalEntry

@property (readonly, nonatomic) ASCodableDatabaseCompetitionListEntry *competitionList;

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCompetitionList:(id)a0;

@end
