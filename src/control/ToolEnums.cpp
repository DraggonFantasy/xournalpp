#include "ToolEnums.h"

auto toolSizeToString(ToolSize size) -> string
{
	switch (size)
	{
	case TOOL_SIZE_NONE:			return "none";
	case TOOL_SIZE_VERY_FINE:		return "veryThin";
	case TOOL_SIZE_FINE:			return "thin";
	case TOOL_SIZE_MEDIUM:  		return "medium";
	case TOOL_SIZE_THICK:			return "thick";
	case TOOL_SIZE_VERY_THICK:  	return "veryThick";
	default:						return "";
	}
}

auto toolSizeFromString(string size) -> ToolSize
{
	if (size == "veryThin")  			return TOOL_SIZE_VERY_FINE;
	else if (size == "thin")			return TOOL_SIZE_FINE;
	else if (size == "medium")  		return TOOL_SIZE_MEDIUM;
	else if (size == "thick")			return TOOL_SIZE_THICK;
	else if (size == "veryThick")		return TOOL_SIZE_VERY_THICK;
	else if (size == "none")			return TOOL_SIZE_NONE;
	else        						return TOOL_SIZE_NONE;
}

auto drawingTypeToString(DrawingType type) -> string
{
	switch (type)
	{
	case DRAWING_TYPE_DONT_CHANGE:   			return "dontChange";
	case DRAWING_TYPE_DEFAULT:  				return "default";
	case DRAWING_TYPE_LINE:  					return "line";
	case DRAWING_TYPE_RECTANGLE:     			return "rectangle";
	case DRAWING_TYPE_CIRCLE:					return "circle";
	case DRAWING_TYPE_ARROW:     				return "arrow";
	case DRAWING_TYPE_STROKE_RECOGNIZER:		return "strokeRecognizer";
	case DRAWING_TYPE_COORDINATE_SYSTEM:		return "drawCoordinateSystem";
	default:									return "";
	}
}

auto drawingTypeFromString(string type) -> DrawingType
{
	if (type == "dontChange")   					return DRAWING_TYPE_DONT_CHANGE;
	else if (type == "line")						return DRAWING_TYPE_LINE;
	else if (type == "rectangle")					return DRAWING_TYPE_RECTANGLE;
	else if (type == "circle")						return DRAWING_TYPE_CIRCLE;
	else if (type == "arrow")    					return DRAWING_TYPE_ARROW;
	else if (type == "strokeRecognizer")			return DRAWING_TYPE_STROKE_RECOGNIZER;
	else if (type == "drawCoordinateSystem")		return DRAWING_TYPE_COORDINATE_SYSTEM;
	else if (type == "default")    					return DRAWING_TYPE_DEFAULT;
	else	        								return DRAWING_TYPE_DEFAULT;
}

auto toolTypeToString(ToolType type) -> string
{
	switch (type)
	{
	case TOOL_NONE:  						return "none";
	case TOOL_PEN:  						return "pen";
	case TOOL_ERASER:    					return "eraser";
	case TOOL_HILIGHTER:					return "hilighter";
	case TOOL_TEXT:  						return "text";
	case TOOL_IMAGE:						return "image";
	case TOOL_SELECT_RECT:  				return "selectRect";
	case TOOL_SELECT_REGION:				return "selectRegion";
	case TOOL_SELECT_OBJECT:				return "selectObject";
	case TOOL_PLAY_OBJECT:  				return "PlayObject";
	case TOOL_VERTICAL_SPACE:				return "verticalSpace";
	case TOOL_HAND:  						return "hand";
	case TOOL_DRAW_RECT:     				return "drawRect";
	case TOOL_DRAW_CIRCLE:  				return "drawCircle";
	case TOOL_DRAW_ARROW:    				return "drawArrow";
	case TOOL_DRAW_COORDINATE_SYSTEM:    	return "drawCoordinateSystem";
	case TOOL_FLOATING_TOOLBOX:  			return "showFloatingToolbox";
	default:								return "";
	}
}

auto toolTypeFromString(string type) -> ToolType
{
	if (type == "none") 							return TOOL_NONE;
	else if (type == "pen")  						return TOOL_PEN;
	else if (type == "eraser")  					return TOOL_ERASER;
	else if (type == "hilighter")					return TOOL_HILIGHTER;
	else if (type == "image")   					return TOOL_IMAGE;
	else if (type == "selectRect")					return TOOL_SELECT_RECT;
	else if (type == "selectRegion")				return TOOL_SELECT_REGION;
	else if (type == "selectObject")				return TOOL_SELECT_OBJECT;
	else if (type == "playObject")  				return TOOL_PLAY_OBJECT;
	else if (type == "verticalSpace")				return TOOL_VERTICAL_SPACE;
	else if (type == "hand")						return TOOL_HAND;
	else if (type == "drawRect")					return TOOL_DRAW_RECT;
	else if (type == "drawCircle")  				return TOOL_DRAW_CIRCLE;
	else if (type == "drawArrow")   				return TOOL_DRAW_ARROW;
	else if (type == "drawCoordinateSystem")		return TOOL_DRAW_COORDINATE_SYSTEM;
	else if (type == "showFloatingToolbox") 		return TOOL_FLOATING_TOOLBOX;
	else	      									return TOOL_NONE;
}

auto eraserTypeToString(EraserType type) -> string
{
	switch (type)
	{
	case ERASER_TYPE_NONE:  			return "none";
	case ERASER_TYPE_DEFAULT:			return "default";
	case ERASER_TYPE_WHITEOUT:  		return "whiteout";
	case ERASER_TYPE_DELETE_STROKE:  	return "deleteStroke";
	default:							return "";
	}
}

auto eraserTypeFromString(string type) -> EraserType
{
	if (type == "none") 					return ERASER_TYPE_NONE;
	else if (type == "default")  			return ERASER_TYPE_DEFAULT;
	else if (type == "whiteout")			return ERASER_TYPE_WHITEOUT;
	else if (type == "deleteStroke")		return ERASER_TYPE_DELETE_STROKE;
	else        							return ERASER_TYPE_NONE;
}

