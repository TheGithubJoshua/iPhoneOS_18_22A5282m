@class PLAccountingQualificationEventEntry;

@interface PLAccountingQualificationDependency : PLAccountingDependency

@property (retain) PLAccountingQualificationEventEntry *qualificationEvent;

- (id)ID;
- (id)range;
- (void)setRange:(id)a0;
- (void).cxx_destruct;
- (id)activationDate;
- (id)initWithQualificationEvent:(id)a0;

@end
