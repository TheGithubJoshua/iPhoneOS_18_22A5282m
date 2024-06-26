@protocol UIFocusEnvironment, _UIFocusMoveTestDataSource, _UIFocusMoveTestDelegate;

@interface _UIFocusMoveTest : _UIFocusTest {
    unsigned long long _activeNumberOfIterations;
    unsigned long long _currentIteration;
    unsigned long long _currentMove;
    struct { unsigned char isPerformingFocusMovement : 1; unsigned char delegateRespondsToWillStartIteration : 1; unsigned char delegateRespondsToDidFinishIteration : 1; unsigned char delegateRespondsToWillMoveFocusAlongHeadingForMoveDuringIteration : 1; unsigned char delegateRespondsToDidMoveFocusAlongHeadingForMoveDuringIteration : 1; unsigned char dataSourceRespondsToNumberOfIterations : 1; unsigned char dataSourceRespondsToMaximumNumberOfMovesDuringIteration : 1; unsigned char dataSourceRespondsToDelayBeforeMoveDuringIteration : 1; unsigned char dataSourceRespondsToHeadingForMoveDuringIteration : 1; unsigned char dataSourceRespondsToShouldResetFocusBeforeIteration : 1; } _flags;
}

@property (weak, nonatomic) id<UIFocusEnvironment> containerFocusEnvironment;
@property (nonatomic) unsigned long long numberOfIterations;
@property (nonatomic) unsigned long long maximumMovesPerIteration;
@property (nonatomic) double movementDelay;
@property (nonatomic) unsigned long long movementHeading;
@property (nonatomic) BOOL resetsFocusBeforeIterations;
@property (weak, nonatomic) id<_UIFocusMoveTestDelegate> delegate;
@property (weak, nonatomic) id<_UIFocusMoveTestDataSource> dataSource;

- (void)main;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)prepareWithCompletionHandler:(id /* block */)a0;
- (double)_dataSourceDelayBeforeMove:(unsigned long long)a0 duringIteration:(unsigned long long)a1;
- (unsigned long long)_dataSourceHeadingForMove:(unsigned long long)a0 duringIteration:(unsigned long long)a1;
- (unsigned long long)_dataSourceMaximumNumberOfMovesDuringIteration:(unsigned long long)a0;
- (unsigned long long)_dataSourceNumberOfIterations;
- (BOOL)_dataSourceShouldResetFocusBeforeIteration:(unsigned long long)a0;
- (void)_notifyDelegateDidFinishIteration:(unsigned long long)a0;
- (void)_notifyDelegateDidMoveFocusAlongHeading:(unsigned long long)a0 forMove:(unsigned long long)a1 duringIteration:(unsigned long long)a2;
- (void)_notifyDelegateWillMoveFocusAlongHeading:(unsigned long long)a0 forMove:(unsigned long long)a1 duringIteration:(unsigned long long)a2;
- (void)_notifyDelegateWillStartIteration:(unsigned long long)a0;
- (void)_performFocusMovement;
- (void)_performFocusMovementAfterDelayForMove:(unsigned long long)a0 iteration:(unsigned long long)a1;
- (void)_resetFocusIfNecessaryBeforeIteration:(unsigned long long)a0;

@end
