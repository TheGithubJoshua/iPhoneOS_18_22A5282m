@class NSDictionary, NSMutableDictionary, NSMapTable;
@protocol HRWDUserActivityResponder;

@interface _HRWDActivityNode : NSObject {
    NSMutableDictionary *_responderActivity;
    NSDictionary *_nextResponderActivity;
    NSMapTable *_responderTable;
}

@property (weak, nonatomic) id<HRWDUserActivityResponder> responder;
@property (weak, nonatomic) id<HRWDUserActivityResponder> nextResponder;

- (void).cxx_destruct;
- (id)description;
- (id)initWithResponder:(id)a0;
- (id)_nextNode;
- (void)addActivitiesToArray:(id)a0 currentNode:(id)a1;
- (id)changeActivityForResponder:(id)a0 activityDictionary:(id)a1;
- (id)transitionActivityForResponder:(id)a0 newResponder:(id)a1 transitionDictionary:(id)a2;

@end
