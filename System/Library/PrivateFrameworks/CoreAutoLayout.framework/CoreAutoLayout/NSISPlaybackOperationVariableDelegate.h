@class NSString, NSISVariable;

@interface NSISPlaybackOperationVariableDelegate : NSObject

@property (retain) NSISVariable *variable;
@property (copy) NSString *variableDescription;
@property (copy) NSString *markedConstraintDescription;
@property BOOL variableIsUserObservable;
@property int orientationHint;

- (id)firstItem;
- (int)nsis_orientationHintForVariable:(id)a0;
- (id)description;
- (void)dealloc;
- (BOOL)nsis_valueOfVariableIsUserObservable:(id)a0;
- (id)nsis_descriptionOfVariable:(id)a0;
- (void)nsis_valueOfVariable:(id)a0 didChangeInEngine:(id)a1;
- (void)_addToEngine:(id)a0;
- (id)secondItem;

@end
