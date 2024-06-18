@class NSPredicate, LSExtensionPointRecord;

@interface _EXRecordQuery : _EXQuery {
    NSPredicate *_predicate;
    struct { unsigned int val[8]; } _hostAuditToken;
}

@property (retain) LSExtensionPointRecord *record;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)extensionPointIdentifier;
- (struct { unsigned int x0[8]; })hostAuditToken;
- (void)setPredicate:(id)a0;
- (unsigned int)platform;
- (id)extensionPointRecords;
- (void)setHostAuditToken:(struct { unsigned int x0[8]; })a0;
- (void)encodeWithCoder:(id)a0;
- (id)predicate;
- (id)initWithExtensionPoint:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)matchesRecord:(id)a0;

@end
