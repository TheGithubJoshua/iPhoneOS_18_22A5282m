@interface MRLegacySendHIDEventMessage : MRProtocolMessage {
    struct __IOHIDEvent { } *_event;
}

@property (readonly, nonatomic) struct _MRHIDButtonEvent { unsigned int x0; unsigned int x1; BOOL x2; } buttonEvent;

- (id)description;
- (void)dealloc;
- (unsigned long long)type;
- (id)initWithHIDEvent:(struct __IOHIDEvent { } *)a0;

@end
