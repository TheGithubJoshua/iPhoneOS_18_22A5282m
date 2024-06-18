@class NSDate;

@interface ATXNotificationEvent : NSObject {
    BOOL _ending;
    BOOL _hiding;
}

@property (nonatomic) long long eventType;
@property (retain, nonatomic) NSDate *ts;
@property (nonatomic) unsigned long long pos;
@property (nonatomic) BOOL topOfPile;
@property (nonatomic) BOOL fromOffScreen;

+ (id)positiveEventSet;
+ (id)endingEventSet;
+ (id)clearEventSet;
+ (id)hidingEventSet;

- (id)pbmsg;
- (BOOL)isHidingEvent;
- (BOOL)isEndingEvent;
- (void).cxx_destruct;
- (id)init:(long long)a0 timestamp:(id)a1 position:(unsigned long long)a2;
- (id)init:(long long)a0 timestamp:(id)a1 position:(unsigned long long)a2 fromOffScreen:(BOOL)a3;
- (id)init:(long long)a0 timestamp:(id)a1 position:(unsigned long long)a2 fromOffScreen:(BOOL)a3 topOfPile:(BOOL)a4;

@end
