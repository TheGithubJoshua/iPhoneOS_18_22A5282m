@class NSArray;

@interface HDInsertSynchronisedAttachmentReferences : HDJournalableOperation {
    NSArray *_attachmentReferences;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)initWithAttachmentReferences:(id)a0;

@end
