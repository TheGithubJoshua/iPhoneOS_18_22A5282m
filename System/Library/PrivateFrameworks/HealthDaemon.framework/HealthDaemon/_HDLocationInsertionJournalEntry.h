@class NSUUID, NSArray;

@interface _HDLocationInsertionJournalEntry : HDJournalEntry {
    NSUUID *_seriesIdentifier;
    NSArray *_data;
}

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
