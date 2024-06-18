@class NSDateComponentsFormatter;

@interface CAMMaxRecordingTimeInstructionLabel : CAMInstructionLabel

@property (retain, nonatomic) NSDateComponentsFormatter *_dateComponentsFormatter;
@property (nonatomic) double remainingTimeInSeconds;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateText;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_textInsets;

@end
