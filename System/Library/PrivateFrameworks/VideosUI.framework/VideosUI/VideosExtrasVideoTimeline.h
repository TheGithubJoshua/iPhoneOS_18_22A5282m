@class NSArray;

@interface VideosExtrasVideoTimeline : NSObject {
    NSArray *_timelineElements;
}

@property (readonly, nonatomic) NSArray *events;

- (void).cxx_destruct;
- (id)description;
- (id)eventForTime:(double)a0;
- (id)initWithTimelineElements:(id)a0;

@end
