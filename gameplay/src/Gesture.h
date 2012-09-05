#ifndef GESTURE_H_
#define GESTURE_H_

namespace gameplay
{

/**
 * Gesture event
 */
class Gesture
{
public:

    /**
     * The gesture event type.
     */
    enum GestureEvent
    {
        GESTURE_SWIPE = 0,
        GESTURE_PINCH,
        GESTURE_TAP,
        GESTURE_ANY_SUPPORTED = -1,
    };

    /**
     * The up direction for a swipe event.
     */
    static const int SWIPE_DIRECTION_UP = 1 << 0;

    /**
     * The down direction for a swipe event.
     */
    static const int SWIPE_DIRECTION_DOWN = 1 << 1;

    /**
     * The left direction for a swipe event.
     */
    static const int SWIPE_DIRECTION_LEFT = 1 << 2;

    /**
     * The right direction for a swipe event.
     */
    static const int SWIPE_DIRECTION_RIGHT = 1 << 3;

private:

    /**
     * Constructor. Used internally.
     */
    Gesture();
};

}

#endif
