@class NSUUID, USOSerializedGraph, NSString;

@interface SIRINLUSystemReportedSuccess : NSObject <SIRINLUSystemDialogAct>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *taskId;
@property (retain, nonatomic) USOSerializedGraph *task;
@property (retain, nonatomic) NSString *renderedText;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTaskId:(id)a0 task:(id)a1;

@end
