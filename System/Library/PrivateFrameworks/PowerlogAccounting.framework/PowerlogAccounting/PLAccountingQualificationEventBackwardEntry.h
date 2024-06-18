@interface PLAccountingQualificationEventBackwardEntry : PLAccountingQualificationEventEntry

+ (void)load;
+ (int)classDirectionality;
+ (id)entryKey;

- (id)initWithQualificationID:(id)a0 withChildNodeNames:(id)a1 withEndDate:(id)a2;

@end
