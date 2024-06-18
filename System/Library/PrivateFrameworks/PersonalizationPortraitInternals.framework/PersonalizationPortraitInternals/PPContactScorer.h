@interface PPContactScorer : NSObject

+ (id)scoredContactsWithContacts:(id)a0;
+ (id)mostRelevantContactsWithStore:(id)a0;
+ (void)scoreContactNameRecords:(id)a0;
+ (id)mostRelevantContactsWithStore:(id)a0 shouldContinueBlock:(id /* block */)a1;
+ (id)mostRelevantContactsWithName:(id)a0 store:(id)a1;

@end
