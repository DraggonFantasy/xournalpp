#include "ToolbarItem.h"

int ToolbarItem::sid = 0;

ToolbarItem::ToolbarItem(string name)
{
	this->name = name;
	this->id = ToolbarItem::sid++;

	if (ToolbarItem::sid < 0)
	{
		ToolbarItem::sid = 0;
	}
}

ToolbarItem::ToolbarItem(const ToolbarItem& item)
{
	this->id = item.id;
	this->name = item.name;
}

ToolbarItem::ToolbarItem()
{
	this->name = "";
	this->id = -100;
}

ToolbarItem::~ToolbarItem() = default;

auto ToolbarItem::getName() -> string
{
	return this->name;
}

auto ToolbarItem::operator==(ToolbarItem& other) -> bool
{
	return this->name == other.name;
}

auto ToolbarItem::getId() -> int
{
	return this->id;
}
