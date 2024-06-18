@class WFHomeWorkflow;

@interface WFHomeWorkflowRunDescriptor : WFWorkflowRunDescriptor

@property (readonly, nonatomic) WFHomeWorkflow *homeWorkflow;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithHomeWorkflow:(id)a0;
- (id)workflowFileDataWithDatabase:(id)a0 error:(id *)a1;

@end
