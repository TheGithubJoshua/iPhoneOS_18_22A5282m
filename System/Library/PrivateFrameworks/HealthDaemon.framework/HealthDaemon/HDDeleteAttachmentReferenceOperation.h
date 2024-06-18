@class NSArray;

@interface HDDeleteAttachmentReferenceOperation : HDJournalableOperation {
    NSArray *_references;
    long long _cloudStatus;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)initWithSynchronizedReferences:(id)a0;
- (id)initWithReferences:(id)a0;

@end
