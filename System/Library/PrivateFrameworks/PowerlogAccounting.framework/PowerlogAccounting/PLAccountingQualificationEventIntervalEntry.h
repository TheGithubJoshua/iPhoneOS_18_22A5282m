@interface PLAccountingQualificationEventIntervalEntry : PLAccountingQualificationEventEntry

+ (void)load;
+ (int)classDirectionality;
+ (id)entryKey;

- (id)initWithQualificationID:(id)a0 withChildNodeNames:(id)a1 withStartDate:(id)a2 withEndDate:(id)a3;
- (id)initWithQualificationID:(id)a0 withChildNodeIDs:(id)a1 withStartDate:(id)a2 withEndDate:(id)a3;

@end
