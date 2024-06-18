@class WFToggleFocusModeContextualActionFocusMode, WFContextualActionCalendarEventDescriptor;

@interface WFToggleFocusModeContextualAction : WFContextualAction

@property (readonly, nonatomic) WFToggleFocusModeContextualActionFocusMode *focusMode;
@property (readonly, nonatomic) unsigned long long operation;
@property (readonly, nonatomic) WFContextualActionCalendarEventDescriptor *eventDescriptor;

+ (BOOL)supportsSecureCoding;
+ (id)spotlightDomainIdentifier;
+ (id)turnOn:(id)a0;
+ (id)turnOff:(id)a0;
+ (id)turnOn:(id)a0 untilEventEnds:(id)a1;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)uniqueIdentifier;
- (id)initWithFocusMode:(id)a0 operation:(unsigned long long)a1 event:(id)a2;

@end
