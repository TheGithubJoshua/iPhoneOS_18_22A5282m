@class NSString, NSDate, WFWorkflowReference;

@interface WFWorkflowRunEvent : WFDatabaseObjectDescriptor

@property (readonly, nonatomic) WFWorkflowReference *workflow;
@property (readonly, nonatomic) NSString *source;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSString *triggerID;
@property (readonly, nonatomic) long long outcome;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 workflow:(id)a1 source:(id)a2 date:(id)a3 triggerID:(id)a4 outcome:(long long)a5;

@end
